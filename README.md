一生一芯项目，包括nemuPA2及之前实验以及npc实验

完成情况
| cpu-tests     | nemu-ifpass                     | npc-ifpass                      |
| ------------- | ------------------------------- | ------------------------------- |
| add           | <font color=#008000>pass</font> | <font color=#008000>pass</font> |
| add-longlong  | <font color=#008000>pass</font> | <font color=#008000>pass</font> |
| crc32         | <font color=#008000>pass</font> | <font color=#008000>pass</font> |
| div           | nopass                          |                                 |
| dummy         | <font color=#008000>pass</font> | <font color=#008000>pass</font> |
| fact          | nopass                          |                                 |
| fib           | <font color=#008000>pass</font> |                                 |
| gold-bach     | nopass                          |                                 |
| hello-str     | nopass                          |                                 |
| if-else       | nopass                          |                                 |
| leap-year     | nopass                          |                                 |
| load-store    | <font color=#008000>pass</font> |                                 |
| matrix-mul    | nopass                          |                                 |
| max           | <font color=#008000>pass</font> |                                 |
| mersenne      | nopass                          |                                 |
| min3          | <font color=#008000>pass</font> |                                 |
| mov-c         | <font color=#008000>pass</font> |                                 |
| movsx         | <font color=#008000>pass</font> |                                 |
| mul-longlong  | nopass                          |                                 |
| pascal        | <font color=#008000>pass</font> |                                 |
| prime         | nopass                          |                                 |
| quick-sort    | <font color=#008000>pass</font> |                                 |
| recursion     | nopass                          |                                 |
| select-sort   | <font color=#008000>pass</font> |                                 |
| shift         | <font color=#008000>pass</font> |                                 |
| shuixianhua   | nopass                          |                                 |
| string        | nopass                          |                                 |
| sub-longlong  | <font color=#008000>pass</font> |                                 |
| sum           | <font color=#008000>pass</font> |                                 |
| switch        | <font color=#008000>pass</font> |                                 |
| to-lower-case | <font color=#008000>pass</font> |                                 |
| unalign       | <font color=#008000>pass</font> |                                 |
| wanshu        | nopass                          |                                 |

-------以下是原始项目信息-----------
# ICS2023 Programming Assignment

This project is the programming assignment of the class ICS(Introduction to Computer System)
in Department of Computer Science and Technology, Nanjing University.

For the guide of this programming assignment,
refer to https://nju-projectn.github.io/ics-pa-gitbook/ics2023/

To initialize, run
```bash
bash init.sh subproject-name
```
See `init.sh` for more details.

The following subprojects/components are included. Some of them are not fully implemented.
* [NEMU](https://github.com/NJU-ProjectN/nemu)
* [Abstract-Machine](https://github.com/NJU-ProjectN/abstract-machine)
* [Nanos-lite](https://github.com/NJU-ProjectN/nanos-lite)
* [Navy-apps](https://github.com/NJU-ProjectN/navy-apps)
