#include <iostream>
#include <fstream>
#include <string>
#include <vector>



/*
    Karl Rohr
        Contact Info
            Email: krohr@fullsail.com
            Discord: karlrohr
            Zoom: https://fullsail.zoom.us/zbook/karl-rohr/karl-rohr-office-hours





            NOTES:

                pwd
                    print working directory
                        shows you the directory you're currently in, in the git bash

                ls
                    list
                        shows you the folders and files in a directory

                            optional commands
                                -ll
                                -la
                                    both of these display the information differently, and see all folders
                                    and will display a permissions matrix


                cd pathToDirectory
                    change directory
                        This is how you change which folder you are in, in a terminal
                            This can be done relative to where you're at now
                            or via true path, if you know the exact file path or folder path to where you're going
                            there's a few other things about cd as well...
                                cd ..
                                    Changes the path back to the parent directory

                                    pressing tab can autocomplete a folder name

                                    the arrow keys can also help you see commands you've previously ran

                mkdir folderName
                    makes a folder in the current directory called whatever you have in the folderName section
                        If you want to include spaces you'll need to wrap the name in quotes otherwise it'll treat it
                        as multiple folders and create one folder per word in the spaces

                touch fileName
                    this creates a file name, you can create any file type you want or leave the type alone
                        touch exampleFile
                        touch exampleText.txt

                        for examples

                        break until 2:45 pm eastern

                nano fileName
                    this will open a very easy word editor in the command line
                        If you want to save your work in nano press ctrl+x, y, enter
                        If you nano and a file that doesn't exist it will still open and if you choose to save it will
                        create that file

                rm fileName
                    this will remove a file from your machine, skipping the recylcing bin

                    becareful with any rm statement you use, especially if you're doing your own research, understand and know
                    what you are removing before you do

                    rm -r folderName
                        this will allow you to use rm to remove folders

                rmdir folderName
                    this removes folders as well
                        again becareful with what you are removing, always know and understand what you're
                        removing



            To start a local git repo you're going to want to be in the directory that project is in and then

                git init
                    this creates a local git repo, this should be done project to project, not entire drives or multiple projects at once
                        If you accidentally do this, there is a way to fix it - but it is tedious

                git status
                    this will show you all tracked and untracked files - tracked will be commited once you do that, untracked will not

                git add file/FolderName
                    however the optional command I use the time is 
                        git add -A
                            this will add everything, typically not a best practice however we don't have sensitive information to worry about so it's fine
                                
                git commit -m "message goes here"
                    this will create a unique tag and version of your code, so if you need to ever roll back or see the code in that version of the code you'll 
                    be able to do that

                git remote add NAME pathToGithubRepo
                    this will create a connection between local and remote repos
                        local is the git init (so on your machine)
                        remote is going to be github (or if you use others gitlabs, sourcetree, many others)

                git push NAME master
                    this will push your code from your machine to the github repo
                    





*/

void WriteFile()
{
    // we need to crate a ofstream object and provide a file name as string
    std::ofstream outputFile("testing.txt");

    // we can check if it's open because if a file/process is being accessed by another typically it will not let us write to a file
    if (!outputFile.is_open())
    {
        std::cout << "error: file could not be opened. " << std::endl;
        
    }
    else
    {

        // write data to that file
        outputFile << "Hello" << std::endl;
        outputFile << "this is a new file" << std::endl;
        outputFile << "That was generated programatically" << std::endl;

        // close that file
        outputFile.close();



    }

    // Keep in mind that this will OVERWRITE any file with the same name, so if you wanted to append or add on to the file it would be different


}

void AppendFile()
{
    // we're going to create ofstream object
    std::ofstream outputFile("testing.txt", std::ios::app);

    if (outputFile.is_open())
    {
        outputFile << "This is the new last line\n" << std::endl;
        outputFile.close();
    }


}

void ReadFile()
{
    // to read a file we need an ifstream object not an ofstream object
    std::ifstream readFile("testing.txt");

    // we can still check if it is open
    if (!readFile.is_open())
    {
        std::cout << "error: file already open" << std::endl;
    }
    else
    {

        std::string line = "";

        // now we're use to seeing getline get text from the user in the console, but we can use it for files as well
        while (std::getline(readFile, line))
        {
            std::cout << line << std::endl;
        }

        // close it when we're done with it
        readFile.close();
    }
}



int main()
{
    std::string reset = "\033[0m";

    std::string red = "\033[31m";

    std::string green = "\033[32m";

    std::string yellow = "\033[33m";

    std::string blue = "\033[34m";

    std::string cyan = "\033[36m";





    std::cout << "We're use to seeing cout to write to the console, using the insertion operators << and same deal with cin and the >> extraction operators " << std::endl;

    WriteFile();
    AppendFile();
    ReadFile();


    std::cout << red << "This line is red" << reset << std::endl;

    std::cout << green << "This line is green" << reset << std::endl;

    std::cout << yellow << "this line is yellow" << reset << std::endl;
    
    std::cout << blue << "this line is blue" << reset << std::endl;

    std::cout << cyan << "this line is cyan" << reset << std::endl;

}

