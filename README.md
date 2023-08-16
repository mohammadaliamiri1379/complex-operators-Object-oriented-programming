\documentclass{article}
\usepackage{geometry}
\geometry{a4paper, margin=1.5in}
\usepackage{enumitem}

\title{Complex Number Operations Program}
\date{}

\begin{document}
\maketitle

\section*{Getting Started}
To use the program, follow these steps:

\begin{enumerate}[label=\arabic*.]
    \item Compile the code using a C++ compiler, such as \texttt{g++}, by running the command:
    \begin{verbatim}
    g++ -o complex_calculator complex_calculator.cpp
    \end{verbatim}

    \item Run the compiled executable:
    \begin{verbatim}
    ./complex_calculator
    \end{verbatim}

    \item The program will prompt you to enter two complex numbers in the format \(a + bi\) or \(a - bi\), where \(a\) is the real part and \(b\) is the imaginary part.

    \item After entering the numbers, the program will provide a menu of operations you can perform on the entered complex numbers.
\end{enumerate}

\section*{Available Operations}
\begin{enumerate}[label=\arabic*.]
    \item \textbf{Addition (1)}: Adds the two complex numbers together and displays the result.
    \item \textbf{Multiplication (2)}: Multiplies the two complex numbers and displays the result.
    \item \textbf{Absolute Value (3)}: Calculates the absolute value of each complex number and displays the results.
    \item \textbf{Exit (4)}: Terminates the program.
\end{enumerate}

\section*{Example Usage}
Suppose you input the following complex numbers:
\begin{verbatim}
3 + 4i
10 - 2i
\end{verbatim}

The program will show the menu and ask you to choose an operation. Let's say you choose option 1 for addition. The program will then display:
\begin{verbatim}
plus = 13 + 2i
\end{verbatim}

You will be prompted to continue or exit. If you choose to continue, you will be presented with the menu again to select another operation or exit.

\section*{Note}
\begin{itemize}
    \item The program assumes that complex numbers are input in the format described above, and it handles both positive and negative real and imaginary parts.
    \item The program uses a class called \texttt{complex} to organize and manipulate complex numbers.
    \item The calculations in the program are performed using the basic arithmetic operations and the \texttt{sqrt} function from the \texttt{<cmath>} library.
\end{itemize}

Please ensure you have a C++ compiler installed to compile and run the code. If you encounter any issues or errors, make sure to review and debug the code accordingly.

\end{document}
