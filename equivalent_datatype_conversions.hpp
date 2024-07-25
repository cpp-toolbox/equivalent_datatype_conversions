#ifndef EQUIVALENT_DATATYPE_CONVERSIONS_HPP
#define EQUIVALENT_DATATYPE_CONVERSIONS_HPP

#include "glm/glm.hpp"
#include "Jolt/Jolt.h"

JPH::Vec3 convert_vec3_from_glm_to_jolt(glm::vec3 input_vector);

glm::vec3 convert_vec3_from_jolt_to_glm(JPH::Vec3 input_vector);

glm::mat4 convert_mat4_from_jolt_to_glm(JPH::Mat44 input_matrix);

#endif //EQUIVALENT_DATATYPE_CONVERSIONS_HPP
