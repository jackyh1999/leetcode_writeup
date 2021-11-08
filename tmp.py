import os

for dir_name in os.listdir():
    os.rename(dir_name, dir_name.replace('_','.'))