//
// Created by zachary on 1/18/21.
//
#include <gazebo/gazebo.hh>

namespace gazebo
{
    class WorldPluginMyRobot : public WorldPlugin
    {
    public: WorldPluginMyRobot() : WorldPlugin()
        {
            printf("Hello World!\n");
        }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {
        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}

