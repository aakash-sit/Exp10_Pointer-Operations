# ✨ Experiment 10 – Pointer Operations in C++

## 🎯 Aim
To study and implement the concept of **functions in C++** by solving the following problems:  
1️⃣ Swap using **Call by Value**  
2️⃣ Swap using **Call by Reference**  
3️⃣ Calculate **Salary Increment** based on various parameters  

---

## 📚 Theory

A **function** in C++ is a block of code designed to perform a specific task.  
It promotes **reusability, modularity, and cleaner code structure**.  

### 🔹 Types of Function Calls
- **Call by Value**  
  👉 A copy of the variable is passed. Changes inside the function **do not** affect the original.  

- **Call by Reference**  
  👉 The actual variable (via memory address) is passed. Changes inside the function **directly affect** the original.  

### 💼 Real-life Example: Salary Increment
Salary increments in organizations depend on **experience, performance rating, or designation**.  
We can model this using **functions + decision making** to automate increment calculation.  

---

## 📝 Algorithms

### 🔹 1. Swap using Call by Value
1. Start the program  
2. Take two numbers as input  
3. Pass them to a function by value  
4. Swap inside the function using a temporary variable  
5. Print values inside the function (swapped)  
6. Return to `main()` and show that **original values remain unchanged**  
7. Stop  

---

### 🔹 2. Swap using Call by Reference
1. Start the program  
2. Take two numbers as input  
3. Pass them to a function by reference (`&`)  
4. Swap values using a temporary variable  
5. Print swapped values inside the function  
6. Return to `main()` and show that **original values are modified**  
7. Stop  

---

### 🔹 3. Salary Increment Calculation
1. Start the program  
2. Input: salary, years of experience, and performance rating  
3. Pass them to a function for increment calculation  
4. Apply conditions:  
   - If experience > 5 years → **20% increment**  
   - Else if performance rating ≥ 8 → **15% increment**  
   - Else → **10% increment**  
5. Return the updated salary  
6. Display incremented salary in `main()`  
7. Stop  

---

## 💻 Programs Covered
✔️ Swap using Call by Value  
✔️ Swap using Call by Reference  
✔️ Salary Increment Calculation  

---

## 🚀 Learning Outcomes
✅ Learned the difference between **Call by Value vs Call by Reference**  
✅ Understood how to make programs **modular using functions**  
✅ Applied **real-life logic** (salary increment rules) in C++  
✅ Improved skills in writing **structured, reusable, and user-friendly code**  
