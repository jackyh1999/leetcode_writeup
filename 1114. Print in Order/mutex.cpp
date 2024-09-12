class Foo {
public:
    Foo() {
        mtx_2.lock();
        mtx_3.lock();
    }

    void first(function<void()> printFirst) {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        mtx_2.unlock();
    }

    void second(function<void()> printSecond) {
        lock_guard<mutex> lg(mtx_2);
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        mtx_3.unlock();
    }

    void third(function<void()> printThird) {
        lock_guard<mutex> lg(mtx_3);
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
    
private:
    mutex mtx_2, mtx_3;
};