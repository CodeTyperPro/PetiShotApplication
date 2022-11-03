#Programming II FINAL EXAM

Programming II – Final Exam

<!---
 * Full name: MARTINS Alfredo Alberto Dínis;
  Neptun-code: WFC6P3; 
 * Operating System: Linux Ubuntu;
 * Date: 30.05.2022;
 * Duration: 3 hours => 14h:00 - 17h:00;
 * Subject: Final Programming II EXAM --->

Prequisites:
1) Filename should be the following:	prog2_final_neptuncode
2) In the first part of the file (as a comment), please write your full name and your neptun code.

Write a C++ program that follows the concepts of OOP.
Through the application, you need to use inheritance!
IT IS A MUST TO SEPARATE YOUR CODE! USE HEADER FILES AS WE DID ON THE CLASS!


Create a Pet Shop application.
When the application starts up, the following MENU should be displayed

  -- Welcome to the Pet Shop application! --
  C) Create new Animal
  S) Select animal type
  E) Exit


Explanation of menu points
General rules: 
1) When the application finished with a logical part (listing/updating/etc), display the MENU again.
2) The application must handle both lowercase and uppercase characters when you select a menu point (u/U).
3) Comment your code.


Description of operations:
C) Create new Animal
- Ask the user what type of Animal he wants to create (A-Animal, B-Bird, F-FlyingBird, N-NotFlyingBird)
- After selecting the type, create the animal with the corresponding properties and store them in their corresponding array (so a FlyingBird will be stored inside a FlyingBird array[] )

S) Select animal type
- List out the 4 possible options: A, B, F, N
- After selecting the type, list out all the individual elements based on their type. Example:

  -- FlyingBirds --
   1 - Larry
   2 - Bongo
   3 - Lessie
   
Then ask the user: Would you like to select a FlyingBird? (Y/N)
If the input is No (N), go back to the main screen, otherwise display: "Which element would you like to select?"
Input: 2

  -- Bongo details --
  ID: 2
  Name: Bongo
  Age: 274
  etc..


Then ask the user: Would you like to edit, delete or play with Bongo? Press N to go back. (E-Edit, D-Delete, P-Play, N-No)

Input: E  --> Print out the properties one-by-one and update them based on user input. Then list all the FlyingBirds again.
Input: D  --> Delete the object, then list all the FlyingBirds again. If that was the last FlyingBird, go back to main.
Input: P  --> List out the method names of the corresponding type. For example a FlyingBird can fly, sing or blink. (F-Fly, S-Sing, B-Blink, B-Back)
              If you press "F", display: Bongo is flying. "S" -> Bongo is singing. etc. (Call the object's own method, don't just print the message.)
              If you press "B" (Back), go back to previous screen and ask again if the user wants to Edit, Delete or Play with Bongo

Input: N  --> Go back to FlyingBird Listing screen 

The current example is about a FlyingBird, obviously, if the type is different, then the corresponding message should be displayed.


You are provided with a simple Animal class hierarchy that contains:
Animal - Base class
Bird - Derived class
FlyingBird – Derived class of Bird
NotFlyingBird – Derived class of Bird

Every Animal has an ID, name, isHungry and age property.
Every Animal has a blink(), eat() and info() method.
Every Bird has an additional wings property.
Every Bird has a sing() method.
Every FlyingBird has an additional range property.
Every FlyingBird has a fly() method and can sing, blink and eat.
Every NotFlyingBird has an additional „usefulness” property (range 1-10 where 10 is the most useful).
Every NotFlyingBird can sing, blink and eat.

If you call the info() method on any instance, all the object details should be displayed.

When you create a FlyingBird (or Bird/NotFlyingBird), use the parent class’ constructors anywhere you can to create a new instance!

Good luck!

Deadline: 2022.05.30  17:00 on Teams 
