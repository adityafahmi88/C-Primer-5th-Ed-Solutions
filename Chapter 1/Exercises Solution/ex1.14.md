# Loop Comparison: `while` vs `for`

## 🔁 `while` Loop

**Advantages:**
- Offers **flexibility** — ideal for loops where the termination condition is not strictly based on a linear counter.
- Useful for **irregular or event-driven loops**, such as waiting for user input or reading from a file until EOF.

**Disadvantages:**
- Can be **harder to read and trace**, especially for more complex conditions.
- More **error-prone** if you forget to update loop variables (e.g., risk of infinite loops).

---

## 🔂 `for` Loop

**Advantages:**
- **Concise and readable** — all loop components (initialization, condition, and increment) are declared in one line.
- Makes **simple, linear loops** easy to understand at a glance.

**Disadvantages:**
- **Less flexible** for loops with non-linear or unpredictable progression.
- Not ideal when the termination condition depends on dynamic or external factors (e.g., user input or file status).
