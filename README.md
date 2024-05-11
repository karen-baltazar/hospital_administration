# Hospital-Administration

## Objective
This program was developed to keep track of individuals entering a hospital, managing and capturing their data, categorizing them into three categories: Patients, Visitors, and Doctors.

A patient is understood as the individual hospitalized, a visitor as the individual who visits the hospital for a reason 'm', and a doctor as the individual who practices this profession in the hospital.

**(Note: The code and comments are in Spanish)**

## Context
Hospitals receive all kinds of individuals for various reasons. Given the quantity and diversity of these individuals, a structure is needed to facilitate the administration of the information of these people entering the hospital on a daily basis. Hence, this project has been developed to assist in this task.

## Functionality
The program allows adding new individuals of any class, whether visitor, patient, or doctor. Likewise, it allows viewing a list of all individuals by class along with their respective information. Similarly, it allows updating this information by entering the name of the individual to be modified/updated [Under construction].

Finally, it consists of a menu with the initial options and runs on the console.

## Considerations
To compile the program, it is necessary to access the console and enter: "g++ main.cpp"

To execute, enter in the console: "a.exe" or "./a.exe"

## Corrections
For this program, the following corrections were made:
1. Default and parameterized constructors of the Visitor, Patient, and Doctor classes were fixed.
2. The Hospital class was added, composed of arrays of visitors, patients, and doctors with their own attributes and methods.
3. Attributes of the Visitor, Patient, and Doctor classes were redefined.
4. Corrections were made to the Class Diagram of the project to integrate these corrections.
5. A menu and the corresponding loop were added to main.cpp so that the user can access the options of said menu.
6. Additionally, style was added to comments to comply with norms and standards.

However, data input validation still needs to be implemented in the program and the missing options of main.cpp need to be built for updating individual data.
