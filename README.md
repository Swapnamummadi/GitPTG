**Git Workflow Summary for the Given Commands:**
**Initializing a Git Repository:**

**git init:** Initializes a new Git repository in the current directory.
The .git/ folder is created, which tracks all Git operations for this project.
Checking Status:

**git status:** Displays the state of the working directory. Initially, after running git init, no commits are made, and files are untracked.
Files listed under "Untracked files" are those not yet added to version control (e.g., GitPtg.txt.txt, code.cpp.txt, Even.cpp).
Adding Files:

**git add <file>:** Adds a file to the staging area, marking it for inclusion in the next commit.
Example: git add Even.cpp and git add . (adds all files in the directory).
Committing Changes:

**git commit -m "<message>":** Saves the staged changes to the repository with a descriptive message (e.g., "git commits").
First-time commit requires setting user details using git config --global user.email and git config --global user.name for identification.
Adding Remote Repository:

**git remote add origin <url>:** Adds a remote repository (e.g., GitHub) to push changes to.
Example: git remote add origin https://github.com/Swapnamummadi/GitPTG.git.
Pushing Changes to Remote:

**git push -u origin master: **Pushes the local changes to the remote repository on the master branch.
git push --set-upstream origin <branch>: Pushes changes to a newly created branch and sets up tracking for the remote branch.
Branch Operations:

**git checkout -b <branch_name>:** Creates a new branch and switches to it.
**git checkout <branch_name>:** Switches to an existing branch.
Example: git checkout -b "copy1" to create and switch to a new branch called copy1.
Merging Changes from Remote Branch:

**git pull:** Fetches changes from the remote repository and merges them with the local branch.
**git merge <branch>**: Merges the specified branch into the current branch. If there are no changes, it will show "Already up to date."
Handling Untracked Files:

Git lists untracked files (e.g., Factorial.cpp.txt) that haven't been added to version control.
Use git add <file> to track them, then commit.
**Push Operations for Branches:**

After committing changes in a new branch (e.g., branch1), you must push it to the remote with git push --set-upstream origin branch1 to create and track the remote branch.
