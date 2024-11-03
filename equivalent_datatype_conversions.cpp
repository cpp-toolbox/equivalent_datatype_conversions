#include "equivalent_datatype_conversions.hpp"

glm::vec3 convert_vec3_from_jolt_to_glm(JPH::Vec3 input_vector) {
    return {input_vector.GetX(), input_vector.GetY(), input_vector.GetZ()};
}

JPH::Vec3 convert_vec3_from_glm_to_jolt(glm::vec3 input_vector) {
    return {input_vector.x, input_vector.y, input_vector.z};
}

std::vector<JPH::Vec3> convert_vec3_vector_from_glm_to_jolt(const std::vector<glm::vec3> &input_vectors) {
    std::vector<JPH::Vec3> output_vectors;
    output_vectors.reserve(input_vectors.size());
    for (const auto &glm_vec : input_vectors) {
        output_vectors.push_back(convert_vec3_from_glm_to_jolt(glm_vec));
    }
    return output_vectors;
}

glm::mat4 convert_mat4_from_jolt_to_glm(JPH::Mat44 input_matrix) {
    glm::mat4 glm_mat;
    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 4; row++) {
            glm_mat[col][row] = input_matrix(row, col);
        }
    }
    return glm_mat;
}
