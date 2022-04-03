# TEST PLAN and Corresponding Output

## High Level Test Plan

| Test ID | Description | Exp.i/p |	Exp.o/p | Actual o/p | Type of Test |
| :------:|:-----------:|:-------:|:-------:| :---------:| :-----------:|
| H1 | Check if the welcoming page is displayed properly | Program execution | Formatted Welcome Page | Formatted Welcome Page | Requirement |
| H2 | Check if the menu is displayed properly | Mode Options| Formatted Menu Page | Formatted Menu Page | Requirement |
| H3 | Not Stuck inside any Function | Function call | Proper function execution with return type and message | Proper function execution with return type and message | Requirement |

## Low Level Test Plan

| Test ID | Description | Exp.i/p |	Exp.o/p | Actual o/p | Type of Test |
| :------:|:-----------:|:-------:|:-------:| :---------:| :-----------:|
| L1 | Verify selected Mode | mode functions| Success->Sensor ON; Failure->mode menu  | Success->Sensor ON; Failure->Mode menu  | Requirement |
| L2 | Members inside and outside the room | Turn ON Device  | 0 members->Turn OFF Device and again sense the room  | ->Turn ON device or Turn ON according to the members sensed in sensor x and y   | Technical  |
| L3 | Temperature sensor | Celsius   | Fahrenheit | Fahrenheit | Technical  |
| L4 | Normalize Room Temperature | Comparing the temperature and giving the req. result  | Back to normal room temperature   | verifies the temperature an brings the room to normal temperature   | Technical  |
