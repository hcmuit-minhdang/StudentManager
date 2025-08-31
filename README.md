# StudentManager

A simple console-based student management system in C++ for practicing object-oriented programming concepts.


## Features
- Add students
- Show All Students
- Find Student by ID
- Remove Student by ID
- Sort by GPA
- 
## Requirements
- g++ (GNU C++ compiler)
## Build & Run
```bash
g++ main.cpp Student.cpp StudentManager.cpp -o StudentManager
./StudentManager
```

## EXAMPLE
---Menu---
1. Add student
2. Show all students
3. Find student by ID
4. Remove student by ID
5. Sort by GPA
0. Exit
1
Enter ID: S01
Enter Name: Minh
Enter Age: 20
Enter GPA: 8.5

---Menu---
1. Add student
2. Show all students
3. Find student by ID
4. Remove student by ID
5. Sort by GPA
0. Exit
1
Enter ID: S02
Enter Name: Lan
Enter Age: 21
Enter GPA: 9.0

---Menu---
1. Add student
2. Show all students
3. Find student by ID
4. Remove student by ID
5. Sort by GPA
0. Exit
2
ID: S01 | Name: Minh | Age: 20 | GPA: 8.5
ID: S02 | Name: Lan  | Age: 21 | GPA: 9.0

---Menu---
1. Add student
2. Show all students
3. Find student by ID
4. Remove student by ID
5. Sort by GPA
0. Exit
3
Enter ID to find: S01
Found -> ID: S01 | Name: Minh | Age: 20 | GPA: 8.5

---Menu---
1. Add student
2. Show all students
3. Find student by ID
4. Remove student by ID
5. Sort by GPA
0. Exit
5
After sorting by GPA:
ID: S02 | Name: Lan  | Age: 21 | GPA: 9.0
ID: S01 | Name: Minh | Age: 20 | GPA: 8.5

---Menu---
1. Add student
2. Show all students
3. Find student by ID
4. Remove student by ID
5. Sort by GPA
0. Exit
0
Exited!!!
