# Solution/Algorithm

這題考C++的sort with compare function，說來慚愧，因為testcase太簡單吃了多次WA
在compare function的設計上要特別小心
邏輯是這樣：若frequency相同，則按照大到小排序，否則按照frequency由小到大排序
所以lambda expression應寫成[&](int a, int b) { return freq[a] == freq[b] ? a > b : freq[a] < freq[b]; })
其中[&]表示pass by address