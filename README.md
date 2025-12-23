<h1>🔢 Hybrid Calculator in C++</h1>

<p>
A console-based <strong>Hybrid Calculator</strong> developed using
<strong>Object-Oriented Programming (OOP)</strong> concepts in C++.
This project combines both <em>Simple</em> and <em>Scientific</em> calculator
functionalities using <strong>Multiple Inheritance</strong>.
</p>

<hr>

<h2>📌 Features</h2>
<ul>
  <li>Simple arithmetic operations (Addition, Subtraction, Multiplication, Division)</li>
  <li>Scientific operations (Square Root, Sine, Power, Log Base 10)</li>
  <li>Multiple Inheritance implementation</li>
  <li>Input validation (division by zero, invalid logarithm input)</li>
  <li>Formatted output using <code>&lt;iomanip&gt;</code></li>
</ul>

<hr>

<h2>🛠️ Technologies Used</h2>
<ul>
  <li><strong>Language:</strong> C++</li>
  <li><strong>Concepts:</strong> OOP, Multiple Inheritance, Encapsulation</li>
  <li><strong>Libraries:</strong> iostream, iomanip, cmath</li>
</ul>

<hr>

<h2>🏗️ Project Structure</h2>
<ul>
  <li><strong>SimpleCalculator</strong> – Handles basic arithmetic operations</li>
  <li><strong>ScientificCalculator</strong> – Handles scientific calculations</li>
  <li><strong>HybridCalculator</strong> – Inherits from both calculators</li>
  <li><strong>Main Function</strong> – Takes user input and displays results</li>
</ul>

<hr>

<h2>🧠 OOP Concepts Used</h2>
<ul>
  <li><strong>Multiple Inheritance:</strong> HybridCalculator inherits from two base classes</li>
  <li><strong>Encapsulation:</strong> Data members are protected</li>
  <li><strong>Code Reusability:</strong> Common logic reused via inheritance</li>
  <li><strong>Constructors:</strong> Used initializer lists for efficient initialization</li>
</ul>

<hr>

<h2>▶️ How to Run</h2>
<ol>
  <li>Clone the repository</li>
  <li>Compile the code:
    <pre><code>g++ hybrid_calculator.cpp -o calculator</code></pre>
  </li>
  <li>Run the program:
    <pre><code>./calculator</code></pre>
  </li>
</ol>

<hr>

<h2>📷 Sample Output</h2>
<pre>
Enter two numbers for Simple Calculator:
12 5
Enter value for Scientific Operations (x):
90
Enter base and power:
10 2

--- Simple Calculator ---
Addition        : 17.00
Subtraction     : 7.00
Multiplication  : 60.00
Division        : 2.40

--- Scientific Calculator ---
Square Root     : 9.49
Sine (degrees)  : 1.00
Power           : 100.00
Log Base 10     : 1.95
</pre>

<hr>

<h2>🚀 Future Enhancements</h2>
<ul>
  <li>Add menu-driven interface</li>
  <li>Implement polymorphism using virtual functions</li>
  <li>Split code into header (.h) and source (.cpp) files</li>
  <li>Add file handling to store calculation history</li>
</ul>

<hr>

<h2>👨‍💻 Author</h2>
<p>
<strong>Akshay</strong><br>
Aspiring Software Developer | C++ | Data Structures | OOP
</p>

<hr>

<p align="center">
⭐ If you like this project, consider giving it a star on GitHub!
</p>
