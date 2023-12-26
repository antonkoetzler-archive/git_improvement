# Make pre-push changes
### Before making changes
git reflog
### Make changes
git commit -am "Change 1"
git commit -am "Change 2"
### Check reflog
git reflog
### Undo changes using reflog
git reset --hard HEAD@{2}
