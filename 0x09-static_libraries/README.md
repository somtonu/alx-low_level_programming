Static library formation.
To go about this task you copy the prorotypes created from your previous tasks to the current folder "0x09-static_libraries"
Then you compile these files, there are twenty of them, you compile them using "gcc -c" to make them object files.
Then you push these '.o' files into the "libmy.a" file using;
"ar rc libmy.a //name of '.o' files" so your command would look like;
"ar rc libmy.a 0-isupper.o 0-memset.o 0-strcat.o ......"
so you just keep on listing on 20 files after the "ar rc libmy.a"
that is how to go about this task.


you can contact me if anything is unclear.
(https:twitter.com/darthzanobi)
