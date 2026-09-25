#include <iostream>


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






*/



int main()
{
    std::cout << "Hello World!\n";
}

