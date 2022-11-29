import launch
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    """Generate launch description with a single component."""
    container = ComposableNodeContainer(
            name='hello_world_container',
            namespace='',
            package='rclcpp_components',
            executable='component_container',
            composable_node_descriptions=[
                ComposableNode(
                    package='hello_world',
                    plugin='autoware::hello_world::HelloWorldNode',
                    name='hello_world_node'),
            ],
            output='screen',
    )

    return launch.LaunchDescription([container])
