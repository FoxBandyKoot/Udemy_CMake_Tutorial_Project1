from conan import ConanFile
from conan.tools.cmake import cmake_layout


class ExampleRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def requirements(self):
        self.requires("fmt/12.0.0")
        self.requires("catch2/3.11.0")

    # def layout(self):
    #     cmake_layout(self)

    # def generate(self):
    #     tc = CMakeToolchain(self)
    #     tc.user_presets_path = false
    #     tc.generate()