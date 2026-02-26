for %%i in (0 1 2 3) do (
    @g++ .\2026\2-sem-lfi\sem04\b02-502-%i%.cpp
    @.\a.exe
)