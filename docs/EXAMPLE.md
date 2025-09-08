# 📖 Examples for Integer Analyzer Pro

[![Run Examples](https://img.shields.io/badge/Run-Examples-blue?style=for-the-badge)](https://github.com/pwf-playz/Integer_Analyzer_Pro)
![Made with C](https://img.shields.io/badge/Made_with-C-blue.svg?logo=c&style=for-the-badge)
	
---

## 🔹 Example 1: Negative Number Check

- Enter the value for a: -5  
- Enter the value for b: 3  
- a (-5) is negative  
- Neither value is negative  
- a = -5, b = 3  
- Press 'r' or 'R' to run again, any other key to quit:

---

## 🔹 Example 2: Both Zeros

- Enter the value for a: 0  
- Enter the value for b: 0  
- Both the values are zero  
- a = 0, b = 0  
- Press 'r' or 'R' to run again, any other key to quit:

---

## 🔹 Example 3: Both Positive

- Enter the value for a: -10  
- Enter the value for b: -8  
- a (-10) is negative  
- b (-8) is negative  
- a = -10, b = -8  
- Press 'r' or 'R' to run again, any other key to quit:

---

### 🎯 Quick Flow (Mermaid Diagram)

```mermaid
flowchart TD
    A[Start Program] --> B[Enter a]
    B --> C[Enter b]
    C --> D{Check Conditions}
    D -->|a < 0| E[a is negative]
    D -->|b < 0| F[b is negative]
    D -->|a > 0 && b > 0| G[Neither negative]
    D -->|a == 0 && b == 0| H[Both zero]
    D --> I[Show final values]
    I --> J[Prompt to Run Again]
    J -->|R/r| B
    J -->|Other Key| K[Exit]

