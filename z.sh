#!/bin/bash

# Generate commit message with current timestamp
read $"commit_msg"
echo $commit_msg

# Add all changes to the staging area
git add .

# Commit changes with the generated message
git commit -m "$commit_msg"

# Push changes to the remote repository
git push
