class Foo {
public:
    Foo() {

    }

    void first(function<void()> printFirst) {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        first_lock = true;
    }

    void second(function<void()> printSecond) {
        while(!first_lock) {}
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        second_lock = true;
    }

    void third(function<void()> printThird) {
        while(!second_lock) {}
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
    
private:
    atomic<bool> first_lock{false}, second_lock{false};
};