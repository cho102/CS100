
# Performance Tracker
 > Authors: \<[Cindy Ho](https://github.com/cho102)\>\<[Denise Chan](https://github.com/denisechan1)\>\<[Euijin (Ruth) Hwang]( https://github.com/ruthhwang)\>

 > ## Phase I
## Project Description
 > * Many students enjoy listening to music for all activites - sleeping, working out, studying, hanging out with friends. We've found that people have different playlists for different scenarios. We want to provide a way to combine people's love of music with productivity. Our project will help the user stay organized and on track during the week, by organizing their tasks and providing them with a variety of playlists to use while they finish their work. 
 > * This project is important to us because as students, productivity is always applicable to our daily lives. Students struggle with feeling the need to be productive in every minute and aspect of their lives. When discussing project ideas, we discussed a mutual love of music. We wanted to combine our love of music and need that many students feel to be productive in one place. That way students can enjoy their daily lives with the music they enjoy. 
 > * Tools We Will Be Using: 
 >   * C++ - This is the language we will be using to implement the project.
 > * Project IO: 
 >   * Input: We will ask them to input their tasks for the week, for both working out and studying. We will also ask them to choose a playlist that they would like to listen to as they work on their tasks.
 >   * Output: The output will be the two "to-do lists", one for school and one for working out. The program will also output a playlist of the user's choosing. 
 > * 3 Design Patterns We Will Be Implementing:
 >   * Composite: We will use this pattern to create a hierarchy of different categories (i.e. workout, finals, subjects, etc.) and tasks in which the user would like to implement. It will allow the user to input the number of tasks and separate them into different categories. The category composite object can contain several subcategories as well as different tasks. In these subcategories, it can also contain smaller tasks as well. 
 >   * Abstract Factory: We will use this pattern to create the multiple playlists the user can choose from, to display and listen to. We will have a base Playlist class, and create a family of related playlists, the only difference between them being the genre that it falls under. The different objects will be Hip-Hop Playlist, Relaxing Playlist, Pop Playlist, Lo-Fi Playlist, RnB Playlist, and Nature Playlist.
 >   * Strategy: We will use this pattern to display our playlist(s) in 3 different ways: organized by song title alphabetically, song length, and by artist title alphabetically. 

 > ## Phase II
## Class Diagram 
![FinalProject Composite Diagram (1)](https://user-images.githubusercontent.com/57569111/101808258-fa2d2700-3aca-11eb-881b-3dd9928e6c74.png)
> The composite class diagram shows the relationship between the component(UserGuide), composite (Category) and the leaf (Tasks). The user can input as many categories and tasks they would like to do, how long they want to spend on the task or each category each day and D-Day, which is when they want to complete the task by. The composite object, Category, can contain several more categories and tasks which are then added into a vector. By getting the hours per day and D-Day, we can calculate how much time should be allocated for each task per day that will best fit the user's schedule. The user is also able to print out a guide that shows what task they should do for each day and how long they should spend on it. The guide is printed recursively.

<img width="1407" alt="CS100- FP Part II (Updated)" src="https://user-images.githubusercontent.com/72418204/101465372-b7b1f180-38f4-11eb-9090-7c20d1ce7f9c.png">

> The abstract factory class allows for me to create multiple concrete factories that create various different playlists. I only have one concrete class because I will be creating one subclass of empty playlists of various types. The types include Hip Hop, EDM, Pop, RnB, Lo-fi, and Nature sounds. The products of the abstract factory class are the actual playlists. As shown, the playlist class is an abstract class, and the individual playlists inherit from this. By doing so, I can add the different songs, artists, and durations of the songs under the correct playlist. 

![strategyomt](https://user-images.githubusercontent.com/30084254/101832498-64a28f00-3aec-11eb-8e83-d923d69adad2.png)
>The strategy pattern we are implementing allows us to sort and display my playlists in three different ways: alphabetically by song title, alphabetically by artist and lastly, by song length. 


 ## Screenshots
>Input of the guide access:
<img width="470" alt="Screen Shot 2020-12-09 at 5 46 42 PM" src="https://user-images.githubusercontent.com/57569111/101710634-bbee2400-3a46-11eb-8673-089399f979b8.png">

>Output of the guide user wants to print:
<img width="489" alt="Screen Shot 2020-12-09 at 5 46 57 PM" src="https://user-images.githubusercontent.com/57569111/101710765-01125600-3a47-11eb-813a-68631b4e4a5e.png">

>Input of the playlist selection menu:
<img width="717" alt="Screen Shot 2020-12-09 at 8 05 01 PM" src="https://user-images.githubusercontent.com/72418204/101720287-0af18480-3a5a-11eb-9a52-998658d10c3c.png">

>Output of the playlist selection menu (the playlist in song name alphabetical order): 
<img width="1094" alt="Screen Shot 2020-12-10 at 10 05 06 AM" src="https://user-images.githubusercontent.com/72418204/101815812-f9998e00-3ad4-11eb-9441-6c31d7869e2e.png">

>Output of the playlist selection menu (the playlist in artist name alphabetical order): 
<img width="1029" alt="Screen Shot 2020-12-10 at 10 43 21 AM" src="https://user-images.githubusercontent.com/72418204/101815826-fef6d880-3ad4-11eb-9aee-387744d4eaea.png">

>Output of the playlist selection menu (the playlist in song length in ascending order): 
<img width="1078" alt="Screen Shot 2020-12-10 at 10 45 50 AM" src="https://user-images.githubusercontent.com/72418204/101815827-ff8f6f00-3ad4-11eb-8c87-ed46d2012563.png">

 
## Installation/Usage
 > 1. Go to the green button at the top of the repository labeled "Code" and copy the "HTTPS" link onto your clipboard
 > 2. Open your terminal, and enter the following command: git clone <GitHub link>
 > 3. Enter the following command: git submodule update --init --recursive
 > 4. Enter the following command: cmake .
 > 5. Enter the following command: make
 > 6. Enter the following command: ./main
 > 7. The menu will output with a list of options. Follow the instructions to navigate through the program (add task, select playlist, etc.).
 
 ## Testing
 > Testing was done using Google Test. Our project was tested and validated with the unit tests we created. Each one of us created a number of tests for the design pattern that we are in charge of. In these tests, we ensure that our functions do what we expect them to do. These tests are located in the "FactoryTest.hpp" and "compositeTest.hpp" files, and can be run with the ./test executable.  

 
