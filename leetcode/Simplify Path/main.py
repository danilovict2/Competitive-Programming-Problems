class Solution:
    def simplifyPath(self, path: str) -> str:
        directories = []
        paths = path.split('/')

        for d in paths:
            if d == '' or d == '.':
                continue
            elif d == '..':
                if directories:
                    directories.pop()
            else:
                directories.append(d)

        return "/" + "/".join(directories)
