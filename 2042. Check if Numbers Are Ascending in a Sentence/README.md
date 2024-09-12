# Solution/Algorithm

- python的各種fancy solution
1. main.py: 普通解法，使用split()和isdigit()
2. short1.py: 使用list comprehension，再用all()來判斷iterable當中是否所有元素皆為True
3. short2.py: one-line solution，先用f將string變成開頭為0，結尾為100的formatted string
(題目給定的數字範圍)，再將'\D+'(大於一個的非數字，也就是word)用re.sub替換成'<'(小於)
最後再使用eval()，對處理完的string做evaluation
4. short3.py: 跟short2.py相反，先用r轉raw string
用re.findall()將'\d+'(至少一位數的digit)取出，得到一個只包含number的list
sorted回傳一個排序過的容器，轉set可用來排除重複元素，key是在排序前先執行的function(例如這裡是轉int)
用以上方法處理完後再和nums做比對
5. short4.py: 和short3.py一樣先取出number，但不使用sorting，而是將nums和nums[1:](排除第一項元素)做zip()
所以第一項元素會對應到第二項元素，第二項對應到第三項，第n-1項對應到第n項，最後再用all(i<j)來判斷
