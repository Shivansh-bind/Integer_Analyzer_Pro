### 📌 `docs/TESTS.md`

# 🧪 Tests for Integer Analyzer Pro

[![Tests](https://img.shields.io/badge/Tests-Ready-success?style=for-the-badge)](https://github.com/pwf-playz/Integer_Analyzer_Pro)
![Manual Testing](https://img.shields.io/badge/Type-Manual-orange?style=for-the-badge)

---

These are **manual test cases** to verify correctness.  
Run the program and input the given values, then compare the output with the expected result.

---

## ✅ Test Case 1: Negative & Positive
**Input:** 
 
a = -3, b = 2

**Expected Output:**  

a (-3) is negative  
Neither value is negative  
a = -3, b = 2

---

## ✅ Test Case 2: Both Negative
**Input:**  

a = -5, b = -9

**Expected Output:** 
 
a (-5) is negative  
b (-9) is negative  
a = -5, b = -9

---

## ✅ Test Case 3: Both Zero
**Input:**  

a = 0, b = 0

**Expected Output:**  

Both the values are zero  
a = 0, b = 0

---

## ✅ Test Case 4: Both Positive
**Input:**  

a = 12, b = 8

**Expected Output:**  

Neither value is negative  
a = 12, b = 8


---

### 📊 Test Summary

```mermaid
graph LR
    T1[Test 1: Mixed] --> PASS
    T2[Test 2: Both Negative] --> PASS
    T3[Test 3: Both Zero] --> PASS
    T4[Test 4: Both Positive] --> PASS
