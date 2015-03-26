# File Structure on the TIIRTS projects repository #
```
/exerciseX                        /* Exercise Level /*
├───rhapsody                      /* Rhapsody /*
│   ├───DefaultComponent
│   │   ├───CygwinConfig          /* Cygwin Configuration /*
│   │   └───DefaultConfig         /* MVS Configuration /*
│   └───embsysx_rpy               /* Database /*
└───source                        /* Eclipse Workspace /* 
    └───embsysx                   /* Eclipse Project */
        └───src                   /* Source Code /*
            └───rpy               /* Rhapsody Generated /*
                └───oxf           /* Rhapsody Header Files /*
```
# Rhapsody #
Only the basic project files and project data base is included. The Rhapsody project is configured to output c++ files directly into the source file dir, "src/rpy"

# Eclipse #
The workspace does not contain all Eclipse's metadata. When a new project has been checked out, it will have to be imported into the Eclipse workspace.
Having the exercise/source/project/structure allows us to have several projects in each exercise.