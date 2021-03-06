//
// Copyright 2017 Christopher Di Bella
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef DOGE_GL_BUFFER_INTERPRETER_HPP
#define DOGE_GL_BUFFER_INTERPRETER_HPP

#include <gl/gl_core.hpp>
#include <glm/vec3.hpp>
#include <gsl/gsl>
#include <memory>
#include <tuple>
#include <utility>
#include <vector>

namespace doge {
   struct buffer_interpreter {
      template <std::experimental::ranges::Integral I>
      constexpr buffer_interpreter(const GLuint index, const GLint size, const I stride,
         const GLsizeiptr offset = 0) noexcept
         : index{index},
           size{size},
           stride{gsl::narrow_cast<GLsizei>(stride)},
           offset{offset}
      {}

      GLuint index;
      GLint size;
      GLsizei stride;
      GLsizeiptr offset = 0;
   };

} // namespace doge

#endif // DOGE_GL_BUFFER_INTERPRETER_HPP
