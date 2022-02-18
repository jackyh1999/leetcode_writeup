import os
import json


# Total problem(2022-02-14 update)

dir_name = input("Input problem's name: ")
difficulty = input("Input difficulty(E/M/H): ")
  
os.mkdir(dir_name)
f = open(dir_name + '/README.md', 'w+')
f.write('# Solution/Algorithm\n')
f.close()

with open('data.json', 'r') as jsonfile:
    data = json.load(jsonfile)
if difficulty == 'E':
    data['easy'] += 1
elif difficulty == 'M':
    data['medium'] += 1
elif difficulty == 'H':
    data['hard'] += 1  
data['total'] += 1

text = ('# Solved\n\n'
'Easy : '   + str(data['easy'])   + ' / ' + str(data['total_easy'])   + '\n'
'Medium : ' + str(data['medium']) + ' / ' + str(data['total_medium']) + '\n'
'Hard : '   + str(data['hard'])   + ' / ' + str(data['total_hard'])   + '\n' 
'Totol : '  + str(data['total'])  + ' / ' + str(data['total_problem']))

f = open('README.md', 'w')
f.write(text)
f.close()

with open ('data.json', 'w') as jsonfile:
    json.dump(data, jsonfile) 