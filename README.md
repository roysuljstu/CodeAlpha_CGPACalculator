# CGPA Calculator (C++)

A simple and user-friendly **CGPA Calculator** developed using C++. This project calculates semester GPA based on course grade points and credit hours.

## 📌 Features

- Take input for the number of courses.
- Input course name, grade point, and credit hours.
- Calculate grade points for each course.
- Calculate total credit hours.
- Calculate total grade points.
- Calculate semester GPA.
- Display individual course results and the final GPA.
- Validate grade points and credit hours.

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:** Object-Oriented Programming (OOP)
- **STL:** Vector
- **Libraries:** `iostream`, `iomanip`, `vector`, `string`

## 📐 GPA Calculation Formula

GPA is calculated using the following formula:

**GPA = Total Grade Points / Total Credit Hours**

Where:

**Total Grade Points = Σ (Grade Point × Credit Hours)**

## 💻 Example Input

```text
Enter number of courses: 3

Course 1
Enter course name: CSE101
Enter grade point: 3.75
Enter credit hours: 3

Course 2
Enter course name: MAT101
Enter grade point: 3.50
Enter credit hours: 3

Course 3
Enter course name: HUM101
Enter grade point: 4.00
Enter credit hours: 2
```

## 📊 Example Output

```text
========== COURSE RESULTS ==========

Course         Grade          Credit         Grade Points
CSE101         3.75           3               11.25
MAT101         3.5            3               10.5
HUM101         4              2               8

Total Credits: 8
Total Grade Points: 29.75
Semester GPA: 3.72
```

## 🚀 How to Run

### 1. Clone the Repository

```bash
git clone YOUR_REPOSITORY_URL
```

### 2. Open the Project Directory

```bash
cd YOUR_PROJECT_FOLDER
```

### 3. Compile the Program

```bash
g++ main.cpp -o cgpa
```

### 4. Run the Program

**Windows:**
```bash
cgpa.exe
```

**Linux / macOS:**
```bash
./cgpa
```

## 📂 Project Structure

```text
CGPA-Calculator/
├── main.cpp
└── README.md
```

## 🎯 Learning Objectives

This project demonstrates:

- Classes and objects in C++.
- Data members and member functions.
- Vectors for storing course information.
- Loops and conditional statements.
- Input validation.
- Mathematical calculations using credit-weighted grade points.

## 🔮 Future Improvements

- Calculate overall CGPA across multiple semesters.
- Support letter grades such as A+, A, B+, and B.
- Store student information.
- Save course results to a file.
- Add a menu-driven interface.

## 👨‍💻 Author

**Md. Roysul Islam**

Computer Science and Engineering (CSE) Student

Jamalpur Science and Technology University (JSTU)

---

*This project was developed for educational purposes as part of learning C++ and Object-Oriented Programming.*
