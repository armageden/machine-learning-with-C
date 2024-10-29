# Machine Learning with C

Welcome to **Machine Learning with C**! This project is a foundational exploration of machine learning concepts implemented in the C programming language, including simple neural networks and logic gates like OR, AND, and NAND. This repository is designed to showcase the implementation of basic neurons and logic gate operations, providing a hands-on understanding of neural computation and logical reasoning in machine learning.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Examples](#examples)
- [Future Work](#future-work)
- [Contributing](#contributing)
- [License](#license)

## Introduction

# 🧠 Machine Learning with C

![C](https://img.shields.io/badge/Language-C-blue.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Contributions](https://img.shields.io/badge/Contributions-Welcome-orange.svg)

Welcome to **Machine Learning with C**! This project explores foundational machine learning concepts using the C programming language. By implementing single and double neurons and logic gates like OR, AND, and NAND, this repository serves as an accessible introduction to neural computation and logical reasoning in machine learning.

---

## 🌟 Features

- 🧩 **Single Neuron Implementation**: Basics of neuron processing in C
- ⚡ **Double Neuron Implementation**: Two-neuron models for extended applications
- 🔌 **Logic Gates**:
  - **OR Gate**: Logical OR operations
  - **AND Gate**: Logical AND operations
  - **NAND Gate**: Complementary to AND logic
  - **Compatibility Mode**: Use OR gates alongside AND and NAND for flexibility and experimentation

---
# 📂 Project Structure

```plaintext
machine-learning-with-C
├── README.md         # Project documentation
│   └── Updated with new features and usage examples
│   └── Oct 29, 2024: Update README.md
├── build.sh          # Script to compile the project
│   └── Oct 29, 2024: Xor gate finished with full operationality
├── gates/            # Directory for gate implementations
│   └── Oct 17, 2024: Made OR, AND, NAND gates workable with single neuron
├── gates.c           # Core logic for OR, AND, NAND gates
│   └── Oct 17, 2024: Made OR, AND, NAND gates workable with single neuron
├── twice/            # Directory for twin neuron and OR-gate functions
│   └── Oct 16, 2024: Added OR-gate and twin neuron functionality with minor fixes
├── twice.c           # Logic for twin neurons and OR-gate functions
│   └── Oct 16, 2024: Added OR-gate and twin neuron functionality with minor fixes
├── xor/              # Directory for XOR gate implementation
│   └── Oct 29, 2024: XOR gate finished with full operationality
├── xor.c             # XOR gate logic
│   └── Oct 29, 2024: XOR gate finished with full operationality


```
# 🎯 Future Work

    Implement more complex neural networks
    Expand gate compatibility testing for multi-layered logic gates
    Add support for additional machine learning concepts, such as XOR gate and simple backpropagation

# 🤝 Contributing

Contributions are welcome! Please open an issue or submit a pull request for any improvements or feature additions.

# 📄 License

This project is licensed under the MIT License. See LICENSE for details.

## Installation

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/machine-learning-with-C.git
   cd machine-learning-with-C
