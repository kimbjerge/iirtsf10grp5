#How-To import an existing project (but without project files) into a Eclipse Workspace

# Introduction #

To minimize the ammount of garbage in the SVN rep, the Eclipse project files has been left out.

I you do a fresh svn checkout, you'll have to create a new eclipse project. This project should make use of the existing file structure.

# How-To #

If you check out exercise5, you'll get the following file structure:

```
|-- exercise5
|   `-- trunk
|       |-- rhapsody
|       |   `-- embsysx_rpy
|       `-- source
|           `-- embsysx
|               |-- Debug
|               |   `-- src
|               |       |-- os
|               |       |   `-- posix
|               |       |-- rpy
|               |       `-- rpyLocal
|               `-- src
|                   |-- os
|                   |   `-- posix
|                   |-- rpy
|                   |   `-- oxf
|                   `-- rpyLocal
```


  * Open Eclipse and set the workspace to: ~/work/courses/tiirts/exercise1/trunk/source
  * Once opened, in the file menu choose "import"
  * Press the triangle next to "General" and select "Existing Projects Into Workspace".
  * Now select the ~/work/courses/tiirts/exercise5/trunk/source folder and press OK
  * Next, select the projects that you wan't to import into the workspace and press finish.

That's it!