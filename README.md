## Intro to C++ I Lab 13
 
vector and the STL

**Goals:**

1.  Implement an Abstract Data Type (ADT) using a vector

2.  Continue using functions to break up our code and pass structs and a vector of structs

3.  See the beauty of using the STL


**Lab 13**

This is the same exact problem as Lab 12, but uses the STL vector. This is not as 
easy as it sounds!!! :)

Abstract Data Types (ADTs) can be implemented in C++ through the use of
an existing ADT called vector in the STL. A simple Word ADT will be implemented and used to hold a Word in a
dictionary words in a vector.

People often find it useful to look up a word in a dictionary and get
the definition as well as a sample usage of the word; therefore, we will
define a Word ADT as a data type containing:

-   word
-   definition
-   sample usage in a sentence

Given the above ADT, our representation will be a C++ declaration as
follows:

<pre>
struct Word {
	string mWord;
	string mDefinition;
	string mExampleUsage;
};
</pre>

Clone the repository for Lab13 using the link on Moodle. There are five
functions that need to be written to successfully complete this lab and
they are:

<pre>
void readWord (ifstream &inFile, Word &sWord);

void readAllWords (vector<Word> &sWords, string fileName);

void displayWord (const Word &sWord);

void displayAllWords (const vector<Word> &sWords);

void removeWord (vector<Word> &sWords, const Word &sWord);
</pre>

Actually, there are only four functions to write as I\'ve written
readWord. Each function that you are to write has been documented. Once
you write the function, uncomment the portion of main that calls the
function and test before going on. readAllWords calls readWord for each
word read and like-wise, displayAllWords calls displayWord for each word
in the array of structs.

The run results will be as follows if you've written each function correctly:

<pre>
Word: computer
Definition: a machine that can be programmed to carry out sequences of arithmetic and logical operations
Sample Usage: Early computers were meant to be used only for calculations.

Word: program
Definition: a specific set of ordered operations for a computer to perform
Sample Usage: My computer program uses structures.

Word: sodium
Definition: a soft, silver-white chemical element that is found in salt
Sample Usage: Excess sodium draws more water into your blood stream, and this increases blood pressure.

Word: final
Definition: a test taken on a subject at the end of a course
Sample Usage: I can't wait to show what I've learned in this course by taking the final.

Word: cabbage
Definition: a large, round vegetable with large green, white, or purple leaves that can be eaten cooked or uncooked
Sample Usage: Cabbages with a dark color are good for you

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

Word: computer
Definition: a machine that can be programmed to carry out sequences of arithmetic and logical operations
Sample Usage: Early computers were meant to be used only for calculations.

Word: program
Definition: a specific set of ordered operations for a computer to perform
Sample Usage: My computer program uses structures.

Word: final
Definition: a test taken on a subject at the end of a course
Sample Usage: I can't wait to show what I've learned in this course by taking the final.

Word: cabbage
Definition: a large, round vegetable with large green, white, or purple leaves that can be eaten cooked or uncooked
Sample Usage: Cabbages with a dark color are good for you

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

Word: program
Definition: a specific set of ordered operations for a computer to perform
Sample Usage: My computer program uses structures.

Word: final
Definition: a test taken on a subject at the end of a course
Sample Usage: I can't wait to show what I've learned in this course by taking the final.

Word: cabbage
Definition: a large, round vegetable with large green, white, or purple leaves that can be eaten cooked or uncooked
Sample Usage: Cabbages with a dark color are good for you

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

Word: program
Definition: a specific set of ordered operations for a computer to perform
Sample Usage: My computer program uses structures.

Word: final
Definition: a test taken on a subject at the end of a course
Sample Usage: I can't wait to show what I've learned in this course by taking the final.

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

Word: program
Definition: a specific set of ordered operations for a computer to perform
Sample Usage: My computer program uses structures.

Word: final
Definition: a test taken on a subject at the end of a course
Sample Usage: I can't wait to show what I've learned in this course by taking the final.


C:\Users\djr1\source\repos\Lab12-Structs\x64\Debug\Structs.exe (process 9848) exited with code 0.
Press any key to close this window . . .
</pre>

**To complete this assignment you must submit the following:**

1.  **An electronic Solution of your program on GitHub**

    a.  You are to click on the Lab13 Link on The C++ Tutorials in the section Data Input to accept this
        assignment as we've done before. Once accepted, code up a
        complete solution to each project specified above. Your
        complete solution is to be pushed to GitHub no later than the
        date and time specified above for your specific section. I will
        only grade your solution from the proper location on GitHub.

    b.  Pay attention to the example output above. Your program's output
        must look **exactly** like the example output! The spacing and
        newlines in your output must match exactly.

    c.  Make sure that your program compiles and runs correctly with no
        errors and no warnings. If you get any errors, double check that
        you typed everything correctly. Be aware that C++ is
        case-sensitive.

2.  **An electronic pdf (punetidLab13Dictionary.pdf) 
of your program is to be emailed to ryandj@pacificu.edu**
