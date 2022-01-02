# Security Policy

## Supported Versions

As Newtrodit is currently in beta, only latest version will be supported. Only report old vulnerabilities if they still exist on the latest supported version.
Known bugs:
`^Z` and `^Y` can crash Newtrodit if pressed twice.
`^G` inside manual may crash Newtrodit.
Dollar escaping in manual overwrites wrong characters.


List of supported versions:

| Version | Supported          |
| ------- | ------------------ |
| 0.5     | :white_check_mark: |
| 0.4     | :x:                |
| 0.3     | :x:                |
| < 0.2   | :x:                |

## Reporting a Vulnerability

To report a vulnerability, create an [issue](https://github.com/anic17/Newtrodit/issues) with the tag `vulnerability`
When reporting a crash, please add the following information:

 - What function where you using before the crash
 - All the information in the crash screen
 - The version you were using, the build date, compilation time. This data can be gathered with `newtrodit -v`
 
 Create an issue and I'll try to fix it as soon as possible, if you know what could be the cause, please let me know.