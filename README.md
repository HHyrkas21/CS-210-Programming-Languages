# CS-210-Programming-Languages

**Summarize the project and what problem it was solving.**
  This project involved creating an object-oriented programming application for Chada Tech in C++, a software engineering company. The goal was to display 2 clocks at the same time on a website, following international standard ISO 8601. The clocks provided both 12-hour and 24-hour formats for both domestic and international clients.

**What did you do particularily well?**
  I believe what I did particularily well in this project was my ability to effictively implement object-oriented principles, like encapsulating each clock into a seperate 'Clock' class with defined methods, like 'display', 'addHour', 'addMinute', and 'addSecond' to show modularity and easy reusability of code.

**Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?:**
  There are a few different ways I could enhance my code. My efficiency could be a starting spot, using time calculation methods to handle the edge cases a little more efficiently, especially during the time format conversions and increment options, but also adding some more security to make sure that the validation mechanisms for the inputs are better able to handle unexpected user inputs.

**Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?**
  I think the most difficult thing about writing this code was the synchronization and simultaneous display for the 12-hour and 24-hour clocks without accidentally bottlenecking the performance or creating inconsistent displays. I overcame this by going through and carefully creating the update mechanisms within each instance to make sure I had consistent and accurate times for both displays.

  I used a tools and resrouces like GeeksforGeeks, w3schools, the C++ video playlist provided, and the zybooks textbook to gather important information and use if I ever got stuck or confused with topics or concepts I didn't quite grasp yet. Feedback on the assignments also proved to be helpful as well, letting me know what worked well and what I could remove.

**What skills from this project will be particularly transferable to other projects or course work?**
  With this project, I learned more about use of object-oriented programming in C++, as well as code organization and effictive use of time-related functionalities. These skills will be directly transferable to future projects and allow me to ensure maintainable solutions for future work.

**How did you make this program maintainable, readable, and adaptable?**
  I went about making my program maintainable, readable and adaptable by structuring the code with clearly defined class definitions, using cohesive methods, and simple yet descriptive variable names. Using inline comments, I documented the function of key areas within my code in order to make it easier to read and understand.
