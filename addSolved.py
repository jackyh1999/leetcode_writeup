import os

dir_name = input("Input problem's name: ")

os.mkdir(dir_name)
f = open(dir_name + '/main.cpp', 'w+')
f.close()
f = open(dir_name + '/README.md', 'w+')
f.write('# Solution/Algorithm\n')
f.close()
