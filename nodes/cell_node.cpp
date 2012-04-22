#include<Simulator/Cell.h>

int main(int argc, char **argv)
{
    // Service stuff
	string ros_name;
	ros_name = "formation_client_";
	ros_name.append(argv[1]);
    ros::init(argc, argv, ros_name);

    ros_name = "state_client_";
    ros_name.append(argv[1]);
    ros::init(argc, argv, ros_name);



	//TODO: this needs to be finished

    // sets dx, dy, dz = 0.0f, theta (heading = 90.0f[default], cellID
    Cell thisCell = Cell(atoi(argv[1]));
	thisCell.setID(atoi(argv[1]));
	thisCell.initNbrs(&thisCell, atoi(argv[1]));

	// Start the state service server for this cell
	ros_name = "state_server_";
	ros_name += thisCell.getID();
	ros::init(argc, argv, ros_name);
	thisCell.startStateServiceServer();



	// Update this cell
	thisCell.update(argv[4]);


	return 0;
}
