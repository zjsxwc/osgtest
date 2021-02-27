#include <iostream>

#include <osgViewer/Viewer>

#include <osg/Node>
#include <osg/Geode>
#include <osg/Group>

#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include <osgUtil/Optimizer>

int main() {
    osg::ref_ptr<osgViewer::Viewer> viewer = new osgViewer::Viewer();

    osg::ref_ptr<osg::Group> root = new osg::Group();

    //copy cow.osg to /home/wangchao/CLionProjects/untitled2/cmake-build-debug/
    osg::ref_ptr<osg::Node> node = osgDB::readNodeFile("cow.osg");
//    osg::ref_ptr<osg::Node> node = osgDB::readNodeFile("/home/wangchao/CLionProjects/untitled2/cow.osg");

    root->addChild(node.get());

    osgUtil::Optimizer optimizer;
    optimizer.optimize(root.get());

    viewer->setSceneData(root.get());

    viewer->realize();
    viewer->run();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
