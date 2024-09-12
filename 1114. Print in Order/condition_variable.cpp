class Foo {
public:
    Foo() {
        count = 1;
    }

    void first(function<void()> printFirst) {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        count = 2;
        cv.notify_all();
    }

    void second(function<void()> printSecond) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [this](){ return count == 2; });
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        count = 3;
        cv.notify_one();
    }

    void third(function<void()> printThird) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [this](){ return count == 3; });
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
    
private:
    condition_variable cv;
    mutex mtx;
    int count;
};