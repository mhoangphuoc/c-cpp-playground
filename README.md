# c-cpp-playground
* Learning C/C++ fundamentals — practice code and small projects. A place to track my progress and share with others.
* This repository contains my C/C++ learning journey. I use it to practice fundamentals, solve exercises, and build small projects.
* My goal is to build a solid programming foundation, keep learning and improving, track my progress over time, and share my work with the community so we can grow together.
---------------------------------------
# GitHub Flow
* Main branches (Maintained)
  - [develop]: Used for experiments, exercises, and ongoing development.
  - [main]: Stable and finalized code.

[develop] → PULL REQUEST → [main]

* Supporting branches (Deleted after task completion)
  - <feature>: Develop new features in parallel.
  - <release>: Manage and prepare multiple versions for release.
  - <hotfix>: Apply quick fixes to critical issues.

<feature> 
    ↳  [develop] →  <release>
              [develop]  ↲↳  [main]  →  <hotfix>
                                [develop]  ↲↳  [main]

---------------------------------------
# Naming Rules & Conventions
* Direcotries, URLs:	kebab-case	(1-study, 2-it,...)
* Files: kebab-case + PascalCase	(Ex01-HelloWord, Ex02-SumTwoNumbers,...)
  --- Include: <Ex01> - Thứ tự bài học, <HelloWorld> - Nội dung bài học
* Classes / Structs:	PascalCase	(StudentInfo, Rectangle,...)
* Variables, Functions:	camelCase	(userName, userAge, totalPrice,... )
* Constants: UPPER_SNAKE_CASE	(MAX_USER, PI_NUMBER,...)