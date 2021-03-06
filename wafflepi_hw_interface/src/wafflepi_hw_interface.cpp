#include <hardware_interface/joint_command_interface.h>
#include <hardware_interface/joint_state_interface.h>
#include <hardware_interface/robot_hw.h>

class MyRobot : public hardware_interface::RobotHW
{
public:
  MyRobot()
 {
   // Mit Joint State Interface verbinden und registrieren
   hardware_interface::JointStateHandle state_handle_a("wheel_left_joint", &pos[0], &vel[0], &eff[0]);
   jnt_state_interface.registerHandle(state_handle_a);

   hardware_interface::JointStateHandle state_handle_b("wheel_right_joint", &pos[1], &vel[1], &eff[1]);
   jnt_state_interface.registerHandle(state_handle_b);

   registerInterface(&jnt_state_interface);

   // Mit Joint Position Interface verbinden und registrieren
   hardware_interface::JointHandle pos_handle_a(jnt_state_interface.getHandle("wheel_left_joint"), &cmd[0]);
   jnt_pos_interface.registerHandle(pos_handle_a);

   hardware_interface::JointHandle pos_handle_b(jnt_state_interface.getHandle("wheel_right_joint"), &cmd[1]);
   jnt_pos_interface.registerHandle(pos_handle_b);

   registerInterface(&jnt_pos_interface);
  }

private:
  hardware_interface::JointStateInterface jnt_state_interface;
  hardware_interface::PositionJointInterface jnt_pos_interface;
  double cmd[2];
  double pos[2];
  double vel[2];
  double eff[2];
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "wafflepi_hardware_interface");

    ros::NodeHandle nh;

    ros::spin();

    return 0;
}