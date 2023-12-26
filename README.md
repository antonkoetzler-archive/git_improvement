# What will be studied
0. **What is HEAD, origin, & main?**
- HEAD: Points to the latest commit
- origin: Default name for remote repository (aka where people clone your project). This change be changed with `git remote rename origin git_improvement`. However, this cannot be changed within the repository globally
- main: The main branch in a git repo
1. **Reverting commits**
- See `MDs/Reverting Commits.md`
2. **Deleting branches**
- Locally: `git branch -d <branch>`
- To remote repository: `git push origin --delete <branch>`
3. **Rebasing & Interactive Bebasing**
- See `Rebasing.md`
4. **Cherry picking**
- Brings only the files that were changed in a specific commit (not all files)
- `git cherry-pick <commit hash>`
- Overwrite your changes `git cherry-pick -n <commit hash>`
5. **Git hooks**
- Code that is ran before `git commit -m "..."`
- `touch .git/hooks/<Filename>.sh`
- `chmod -x .git/hooks/<Filename>.sh`
6. **Using submodules**
- Embedding other repositories within your repository
- `git submodule add https://github.com/Myoro/MyoroPlayer.git`
- `git submodule update --init --recursive`
7. **Refloging**
- See `Reflogging.MD`
8. **Git worktrees**
- For keeping copies of a certain branch, useful to test differences between your changes for example
- `git worktree add <branch> <folder to place>`
9. **Detached head**
- Basically for viewing a certain commit, you cannot make changes in a detached head
- `git checkout <commit hash>`
10. **Git stash**
- Saving changes that, for example, you may not push
- `git stash`: Stash this current segment
- `git stash list`
- `git stash apply <stash name>`
11. **Actions**
