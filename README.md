# cpp-automotive-journey
My 90-day C++ from scratch to Automotive HAL expertise - STB to Auto

## 🎯 Goal
Move from STB domain to Automotive C++ HAL/VHAL roles in 90 days. Daily 25 mins + Weekend 2.5 hrs.

## 📚 LearnCpp Filter (Only study this, skip rest)
- MUST: Ch 12 Pointers, Ch 14 Classes, Ch 19 new/delete, Ch 20 Virtual, Ch 22 Smart Ptr + Move, Ch 23 Threading
- SKIP: Ch 6 Floating point deep, Bit Manipulation advanced, Template meta

## 📅 90-Day Tracker - Weekly

| Week | Focus | Weekday Goal (25min/day) | Weekend (2.5hr) | Status |
|------|-------|--------------------------|----------------|--------|
| W1 | MyString Project | Ctor, Deep Copy | Add operator= + nullptr safety | ✅ Doing |
| W2 | OOPS Vehicle Hierarchy | virtual, inheritance | Vehicle->Car->EV project | ⏳ |
| W3 | MyVector Template | Class template | MyVector push_back | ⏳ |
| W4 | Smart Pointers | unique_ptr, shared_ptr | Convert MyString to smart_ptr | ⏳ |
| W5 | Move + Lambda | std::move, lambda | Callback with std::function | ⏳ |
| W6 | STL VehicleStore | map vs unordered_map | Property Store v1 | ⏳ |
| W7 | Threading Core | mutex, lock_guard | Thread-safe Queue | ⏳ |
| W8 | Threading Adv | condition_variable | CAN->VHAL Producer-Consumer | ⏳ |
| W9 | Automotive HAL 1 | VHAL AIDL read | Mock VHAL get/set | ⏳ |
| W10 | Automotive HAL 2 | Binder death recipient | Mock VHAL subscribe | ⏳ |
| W11 | Debugging | gdb, asan, tombstone | Debug 3 crashes | ⏳ |
| W12 | Interview | HAL Design questions | Resume + GitHub final | ⏳ |

## 📆 Daily Log - Week 1 Detailed

| Day | Date | Chapter No | Chapter Name | Micro Task (15-25min) | Done? | Commit Link |
|-----|------|------------|--------------|------------------------|-------|-------------|
| Day1 | Oct7 | 19.1 + 19.2 | Dynamic allocation new/delete, new[]/delete[] | Constructor new char[] + strcpy | ✅ Done | [link] |
| Day2 | Oct8 | 12.8 + 12.9 | Null pointers, Pointers and const | Add nullptr check + operator= + self check | ⏳ | |
| Day3 | Oct9 | 14.14 | Shallow vs Deep Copying | Test deep copy with prints | ⏳ | |
| Day4 | Oct10 | 14.15 | Copy Constructor | Re-code copy ctor without seeing | ⏳ | |
| Day5 | Oct11 | 14.16 | Copy Assignment + Self Assign | Test s2=s1, s1=s1 | ⏳ | |
| Day6 Sat | Oct12 | 14.6 + 20.3 | Destructor + Virtual Destructor | Add cout in dtor, understand flow | ⏳ | |
| Day7 Sun | Oct13 | - | Testing | Push final MyString + 3 test cases | ⏳ | |

## 🐛 Rules If I Miss
- Miss 1 day: split 1hr next 2 days
- Miss full weekend: use Buffer week (W4, W7 are buffers)
- Miss full week: type "pause this week" to extend

## 🔗 Daily Progress
- Weekday: 25 min Pomodoro (5 read + 15 code + 5 push)
- Weekend: 2.5 hr deep work
