# Solution/Algorithm

1. atomic<bool> guarantees atomic transaction
2. two mutex with lock_guard<mutex>
3. two semaphore sem_t 
4. condition variable with a counter and a unique_lock<mutex>