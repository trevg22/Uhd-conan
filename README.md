# UHD Conan Package

## Setup

Enable the uv environment:
```bash
uv sync
```

## Building the Package

Create the Conan package:
```bash
conan create .
```

## Using in Another Project

Add to your `conanfile.py`:

```python
from conan import ConanFile

class MyProject(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    requires = "uhd/4.10.0.0"
```
