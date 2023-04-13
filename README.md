# Difficulty viewing large code files?

If you're having trouble viewing large code files on GitHub, you may find it helpful to download a ZIP file containing the entire repository. To do so, follow these steps:

1. Click on the green "Code" button on the repository page.
2. Select "Download ZIP" from the dropdown menu.
3. Save the ZIP file to your computer.

This can be particularly useful if you're experiencing issues with GitHub's web interface or if you need to access the repository without an internet connection. If you have any questions or concerns, please don't hesitate to contact us. 
<img width="624" alt="image" src="https://user-images.githubusercontent.com/117291117/231703905-7469ae09-6d82-4f77-ad05-fa29142ac9a8.png">
# IIT – HYDERABAD HOSPITAL HELPDESK PORTAL

**Description:** The IIT-H Hospital Helpdesk Portal is a multipurpose system that includes a directory of doctors and patients, an appointment management system, and a feedback management portal. The portal allows for easy access to important information, including doctor and patient details, appointment availability, and feedback ratings. The system also allows for easy updates and searching capabilities.

## Functionality

The code starts by defining the main function and declaring several string variables to store the data of doctors and patients. 

It then performs the following tasks:

- Takes input from the user to add new doctor records, using a for loop and `getline()` function to read each field. The `SortedInsert()` function is called to insert the new record in the linked list.
- Opens a CSV file and reads its contents line by line. It uses a `while` loop to extract the data of each doctor from the line using `getline()` and `stringstream`. The `SortedInsert()` function is called again to insert the new record in the linked list.
- Prompts the user to delete a doctor record using the `Delete()` function and displays the updated linked list using the `Display()` function. 
- Prompts the user to update a doctor record using the `Update()` function and displays the updated linked list.
- Prompts the user to search for a doctor record using the `Search()` function, which prints the data of the doctor if found.
- Prompts the user to enter the department of a doctor and uses the `SearchDepartment()` function to print the data of all doctors in that department.
- Prompts the user to enter the name of a doctor and uses the `SearchName()` function to print the data of that doctor.
- Prompts the user to enter a feedback rating for a doctor and updates the feedback and number of patients fields of that doctor using arithmetic operations. Finally, it prints the updated data of that doctor using the `SearchName()` function.

The code also includes similar code for managing data of patients, but it is commented out.

