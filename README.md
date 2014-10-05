Welcome to QkThings!
=====================

The open source framework and modular platform for smart devices.

**IMPORTANT:** read the [Building Instructions](http://discourse.qkthings.com/t/building-instructions/20) before cloning this repository.

Questions? Bugs? Visit [community.qkthings.com](http://community.qkthings.com) or send an email to `dev@qkthings.com`

# QkStart

If you want to contribute to development, we have included a Vagrant configuration to help you get started quickly.
This will create a virtual machine with all the tools and libraries you need to hack on the code.

1. Download and install [VirtualBox](https://www.virtualbox.org/)
1. Download and install [Vagrant](https://www.vagrantup.com/)
1. Clone this repo
1. Open a command-line on the repo's root and

    vagrant up

1. Wait for the machine to finish installing and 

    vagrant ssh -c qtcreator -Y

1. Go to

    "Tools" > "Options..." > "Build & Run"

 and replace the "../" in the "Default build directory" field with "/home/vagrant/". This is to workaround issues with symlinks in Vagrant shared folders.
1. Happy Hacking!

