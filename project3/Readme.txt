Greetings and Salutations,
1- my partner Ahmed Khalaf Dropped the class last Sunday. So everything is done by me.
2- I didnt implement boost or folly or any other future promise in threadpool design.
3- No stdexcept if thread is zero.
4- I used hardware cpu core count as default if you run as default with no argument passed, also default address "localhost:50035" and default for the Vendor text-file is "vendor_addresses.txt".
5- I used the google grpc exampl per the FAQ.
6- I used this tutorial as guide line for implementing threadpool with vector and task --> https://www.youtube.com/watch?v=ZKIhHLM9MfQ&t=1388s -->  mvorbrodt/blog 
7- The default for two arguements will be the Vendor file "vendor_addresses.txt" --> so input should be the ip:port and number of threads.
8- The default for one argument will be THe Vendor file "vendor_addresses.txt" and the address of the server "localhost:50035" --> so input should be number of threads.
9- I do everything on vim and on a virtual machine on my proxmox server so sorry if spelling and indentation errors of code.
10- Also i added three lines to the CMakelist to enforce c++ 11 standard since it was compiling on my VM producing errors, one other reason not to use future/promise standard lib.

I cant remember anything else but thank you all for your help and hardwork with us.
