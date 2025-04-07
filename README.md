# 🧾 first_cpp_project  
> 💬 **%99 Puduk, %1 ChatGPT**

**My very first C++ project. Basic user data collection and output formatting using `cin`, `cout`, `iomanip`, and logic handling.**

---

### 🧠 Features

✅ Collects detailed user information:  
- Name & Surname  
- Country & Country Code  
- Age, Height, Weight  
- Gender & Phone number

✅ Performs calculations:  
- **BMI Score**  
- **Eligibility Check** (age-based)  
- **Lucky Number** (random number with `srand()` and `rand()`)

✅ Takes user’s favorite 3 courses and their grades

✅ Displays everything cleanly using `setw()` and `left` formatting

✅ Shows data limits using `numeric_limits<>`

---

### 🧪 Sample Concepts Covered

- `cin` / `getline()`  
- `srand`, `rand`  
- `numeric_limits`  
- `boolalpha`, `noboolalpha`  
- `setw`, `left` from `<iomanip>`  
- `arrays` and `conditional expressions`

---

### 📌 How to Compile & Run

```bash
g++ main.cpp -o user_data
./user_data

-------------------- USER DATA --------------------
Name:                     Mert
Surname:                  Demir
Country:                  Turkey T
Age:                      21
Gender:                   M
Height:                   1.72
Weight:                   54
Phone number:             1234567890

>> BMI score: 18.2
>> Is Eligible: true
>> Is Eligible: 1

Today is lucky number: 78/100

int min: -2147483648 | int max:2147483647
float min:1.17549e-38 | float max:3.40282e+38

Course    |Score   
----------|--------
Math      |95      
Physics   |87      
CS        |99      
-------------------- USER DATA --------------------

---


