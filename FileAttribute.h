#pragma once
#include <string>
#include "File.h"
using namespace std;

class FileAttribute
{
private:
	string name;
	void* data;
};

class FileManager {
private:

	class FileNode {
	private:
		File* m_data;
		FileNode* m_next;

	public:

		FileNode();

		virtual ~FileNode();

		FileNode(File* file);

		FileNode* getNext() const;

		void setNext(FileManager::FileNode* nextNode);

		File* getData() const;
	};

	FileManager::FileNode* m_head;
	FileManager::FileNode* m_tail;

public:

	FileManager();

	virtual ~FileManager();

	void add(File* data);

};