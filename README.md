# pyrosim: A python robot simulator. 


Pyrosim enables the creation of robots with arbitrary body plans
and neural controllers, and the optimization of them in arbitrary simulated
environments.

## Installation instructions.

  Download or clone the GitHub [repository](https://github.com/ccappelle/pyrosim).

  If you downloaded the zipped version, unzip the directory somewhere you can access it.

  Note: Pyrosim is intended for use with Python2.x. It does not yet run smoothly with Python3.x.
  Pyrosim also currently only supports Linux and Mac OS. Windows support has been discontinued
  for the time being.

  This is the new version of pyrosim. For those looking for the old version it can be found
  [here](https://github.com/jbongard/pyrosim).

### For Mac and Linux users:

  Open a terminal window, and navigate into that directory. For example:

  ```bash
  $ cd ~/Desktop/pyrosim
  ```

  Run build.sh:

  ```bash
  $ sh build.sh
  ```

  This takes three to five minutes. The output should look like this:
  
  ```bash
  Unpacking ode-0.12.tar.bz2...done
  Building ode-0.12...done
  Building simulator...done
  ```

  If you are installing from Linux and you do not get the third
  `done' confirmation, install these additional packages

  ```
  $ sudo apt-get install build-essential
  $ sudo apt-get install freeglut3-dev
  ```

  then re-install Pyrosim:

  ```
  $ sh build.sh
  ```

  Once you get all three `done' confirmations, test the package by running
  ```bash
  $ python Demo_00_Empty_Sim.py 
  ```
  This should bring up an OpenGL window displaying an empty, virtual world.
  The window will close on its own after a few seconds.

### Next steps.

Now you can start making robots [here](https://www.reddit.com/r/ludobots/wiki/pyrosim/simulation), starting at step #3.

